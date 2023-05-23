Pod::Spec.new do |s|
  s.name             = "PULPulsateBeta"
  s.version          = "4.0.9BetaRC1"
  s.summary          = "Pulsate SDK Beta"

  s.homepage         = "http://pulsatehq.com/"

  s.license          = 'Commercial'
  s.author           = { "Pulsate" => "http://pulsatehq.com/" }
  s.source           = { :git => "https://github.com/PulsateHQ/pulsate-ios-sdk.git", :branch => 'beta', :tag =>  s.version.to_s  }

  s.platform     = :ios, '12.0'
  s.swift_version = "5.5"
  s.requires_arc = true
  s.vendored_frameworks = 'PULPulsateBeta/PULPulsate.xcframework'
  s.resource = 'PULPulsateBeta/PULPulsateBasic.bundle'
  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'
  s.dependency 'SDWebImage'

  s.library = 'z'
  s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
end
