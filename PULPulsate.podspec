Pod::Spec.new do |s|
  s.name             = "LOCLocate"
  s.version          = "1.0.0"
  s.summary          = "Locate SDK"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :branch => 'locate_sdk', :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true
  s.vendored_frameworks = 'LOCLocate/LOCLocate.framework'
  s.resource = 'LOCLocate/LOCLocateBasic.bundle'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.library = 'z'

end
