Pod::Spec.new do |s|
  s.name             = "PULPulsateChatBeta"
  s.version          = "3.0.0.1"
  s.summary          = "Pulsate SDK Chat Bot"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :branch => 'chatbot', :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true
  s.vendored_frameworks = 'PULPulsateChatBeta/PULPulsate.framework'
  s.resource = 'PULPulsateChatBeta/PULPulsateBasic.bundle'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.library = 'z'

end
