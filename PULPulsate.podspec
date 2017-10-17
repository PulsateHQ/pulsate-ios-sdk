Pod::Spec.new do |s|
  s.name             = "PULPulsateMicro"
  s.version          = "4.0.0"
  s.summary          = "Pulsate SDK + Microfencing"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :branch => 'microfencing', :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true
  s.vendored_frameworks = 'PULPulsate/PULPulsate.framework'
  s.resource = 'PULPulsate/PULPulsateBasic.bundle'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.library = 'z'

end
