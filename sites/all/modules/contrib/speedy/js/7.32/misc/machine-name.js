(function($){Drupal.behaviors.machineName={attach:function(context,settings){var self=this;$.each(settings.machineName,function(source_id,options){var $source=$(source_id,context).addClass("machine-name-source");var $target=$(options.target,context).addClass("machine-name-target");var $suffix=$(options.suffix,context);var $wrapper=$target.closest(".form-item");if(!$source.length||!$target.length||!$suffix.length||!$wrapper.length){return}if($target.hasClass("error")){return}options.maxlength=$target.attr("maxlength");$wrapper.hide();if($target.is(":disabled")||$target.val()!=""){var machine=$target.val()}else{var machine=self.transliterate($source.val(),options)}var $preview=$('<span class="machine-name-value">'+options.field_prefix+Drupal.checkPlain(machine)+options.field_suffix+"</span>");$suffix.empty();if(options.label){$suffix.append(" ").append('<span class="machine-name-label">'+options.label+":</span>")}$suffix.append(" ").append($preview);if($target.is(":disabled")){return}var $link=$('<span class="admin-link"><a href="#">'+Drupal.t("Edit")+"</a></span>").click(function(){$wrapper.show();$target.focus();$suffix.hide();$source.unbind(".machineName");return false});$suffix.append(" ").append($link);if($target.val()==""){$source.bind("keyup.machineName change.machineName input.machineName",function(){machine=self.transliterate($(this).val(),options);if(machine!=""){if(machine!=options.replace){$target.val(machine);$preview.html(options.field_prefix+Drupal.checkPlain(machine)+options.field_suffix)}$suffix.show()}else{$suffix.hide();$target.val(machine);$preview.empty()}});$source.keyup()}})},transliterate:function(source,settings){var rx=new RegExp(settings.replace_pattern,"g");return source.toLowerCase().replace(rx,settings.replace).substr(0,settings.maxlength)}}})(jQuery);