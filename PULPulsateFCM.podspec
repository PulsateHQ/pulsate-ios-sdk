Pod::Spec.new do |s|
  s.name             = "PULPulsateFCM"
  s.version          = "2.15.6"
  s.summary          = "Pulsate SDK"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :branch => 'fcm', :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true
  s.vendored_frameworks = 'PULPulsateFCM/PULPulsate.framework'
  s.resource = 'PULPulsateFCM/PULPulsateBasic.bundle'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.library = 'z'
  s.static_framework = true
  s.dependency 'Firebase'
  s.dependency 'Firebase/Core'
  s.dependency 'Firebase/Messaging'
  s.dependency 'CocoaLumberjack'
  s.dependency 'AFNetworking'
  s.dependency 'SSZipArchive'
end
