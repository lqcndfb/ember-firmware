/**
 * \file Button.h
 * \brief Electric Echidna Button Class
 * \license copyright (c) 2014, Electric Echidna Ltd All Rights Reserved
 *
 * Used under license.  Refer to your Electric Echidna project manager.
 *
 */

#ifndef __BUTTON_H__
#define __BUTTON_H__

typedef enum ButtonState {
    ButtonReleased,
    ButtonDepressed,
    ButtonPressed,
    ButtonHeld
};


class Button {
    private:
        volatile uint32_t _last_interrupt;
        volatile uint32_t _depressed_time;
        volatile ButtonState _state;
        uint8_t _last;
        uint16_t _hold_time_ms;
        uint16_t _debounce_time_ms;
        uint8_t _pin;

    public:

        Button(uint8_t pin, uint16_t debounce_time_ms, uint16_t hold_time_ms) {
            _pin = pin;
            _hold_time_ms = hold_time_ms;
            _debounce_time_ms = debounce_time_ms;
            _state = ButtonReleased;
            _depressed_time = 0;
            _last = HIGH;
            _last_interrupt = 0;
            pinMode(_pin,INPUT);
        }

        void interrupt() {
            _last_interrupt = millis();
            //blocking debounce
            delay(_debounce_time_ms);
            update_status();
        }

        void update_status() {
            uint32_t now = millis();
            uint8_t current = digitalRead(_pin);

            //if (now < (_last_interrupt+_debounce_time_ms)) return; //debounce
            //Serial.println("Int");

            if ((current == LOW) && (_state == ButtonReleased)) {
                touch();
                return;
            }

            if ((current == HIGH) && (_state != ButtonReleased)) {
                release();
                return;
            }

        }

        ButtonState state() {
            return _state;
        }

        void reset_state() {
            _state = ButtonReleased;
        }

        void touch() {
            //Serial.println("Touch");
            _depressed_time = millis();
            _state = ButtonDepressed;
        }

        void release() {
            uint32_t now = millis();
            //Serial.println("Release");

            //hold or press
            if (now < (_depressed_time+_hold_time_ms)) {
                _state=ButtonPressed;
            } else {
                _state=ButtonHeld;
            }
        }
};

#endif
