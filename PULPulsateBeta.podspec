Pod::Spec.new do |s|
  s.name             = "PULPulsateBeta"
  s.version          = "2.18.0.1"
  s.summary          = "Pulsate SDK Beta"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :branch => 'beta', :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true
  s.vendored_frameworks = 'PULPulsateBeta/PULPulsate.framework'
  s.resource = 'PULPulsateBeta/PULPulsateBasic.bundle'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.library = 'z'

end
