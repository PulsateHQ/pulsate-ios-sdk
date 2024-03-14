Pod::Spec.new do |s|
  s.name             = "PULPulsate"
  s.version          = "4.4.1"
  s.summary          = "Pulsate SDK"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :tag => s.version.to_s }

  s.platform     = :ios, '13.0'
  s.swift_version = '5.0'
  s.requires_arc = true
  s.vendored_frameworks = 'PULPulsate/PULPulsate.xcframework'
  s.resource = 'PULPulsate/PULPulsateBasic.bundle'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.library = 'z'
  s.dependency 'SDWebImage'
end
