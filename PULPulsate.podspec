Pod::Spec.new do |s|
  s.name        = 'PULPulsate'
  s.version     = '4.8.3'
  s.summary     = 'Pulsate SDK'
  s.description = 'Pulsate SDK for iOS - Mobile engagement platform for push notifications, in-app messaging, and location-based marketing.'

  s.homepage    = 'https://github.com/PulsateHQ/pulsate-ios-sdk'

  s.license     = { :type => 'Commercial', :file => 'LICENSE' }

  s.authors     = { 'Pulsate' => 'support@pulsatehq.com' }

  s.source      = { :git => 'https://github.com/PulsateHQ/pulsate-ios-sdk.git',
                    :tag => s.version.to_s }

  s.ios.deployment_target = '13.0'

  s.requires_arc   = true

  s.swift_versions = ['5.0']

  s.vendored_frameworks = 'Frameworks/PULPulsate.xcframework'

  s.frameworks = 'CoreData', 'CoreLocation', 'SystemConfiguration', 'CoreBluetooth'

  s.static_framework = false
end

