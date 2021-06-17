Pod::Spec.new do |s|
  s.name             = "PULPulsate"
  s.version          = "3.7.0"
  s.summary          = "Pulsate SDK"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :tag => s.version.to_s }

  s.platform     = :ios, '9.0'
  s.requires_arc = true
  s.vendored_frameworks = 'PULPulsate/PULPulsate.framework'
  s.resource = 'PULPulsate/PULPulsateBasic.bundle'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.library = 'z'
  s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
end
