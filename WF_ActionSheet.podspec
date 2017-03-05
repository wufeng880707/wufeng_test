Pod::Spec.new do |s|
    s.name         = 'WF_ActionSheet'
    s.version      = '1.0.0'
    s.summary      = 'An ActionSheet like WeChat'
    s.homepage     = 'https://github.com/wufeng880707/wufeng_test'
    s.license      = 'MIT'
    s.authors      = {'wufeng' => 'wufeng880707@sina.com'}
    s.platform     = :ios, '6.0'
    s.source       = {:git => 'https://github.com/wufeng880707/wufeng_test.git', :tag => s.version}
    s.source_files = 'WF_ActionSheet/*.{h,m}'
    # s.requires_arc = true
end
