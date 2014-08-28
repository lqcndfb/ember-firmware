module Smith
  module App
    module AppHelper

      def h(text)
        Rack::Utils.escape_html(text)
      end

      def hidden_fields(object)
        fields = []
        object.marshal_dump.each_pair do |k, v|
          fields << %Q(<input type="hidden" name="wireless_network[#{k}]" value="#{v}" />)
        end 
        fields.join("\n")
      end

      # Clear the flash and return a json string of the contents
      def flash_json
        msg = Hash[flash.keys.map { |k| [k, flash[k]] }]
        # Clear the flash values
        flash.flag!
        flash.sweep!
        # Clear the flash cache
        flash.now.clear
        msg.to_json
      end

    end
  end
end
