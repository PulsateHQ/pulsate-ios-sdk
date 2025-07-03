Pod::Spec.new do |s|
  s.name             = "PULPulsate"
  s.version          = "4.7.6"
  s.summary          = "Pulsate SDK"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :tag => s.version.to_s }

  s.platform     = :ios, '13.0'
  s.swift_version = '5.0'
  s.requires_arc = true
  s.vendored_frameworks = 'Frameworks/PULPulsate.xcframework'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.static_framework = false
end
