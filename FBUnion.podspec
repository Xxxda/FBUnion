
Pod::Spec.new do |spec|


  spec.name         = "FBUnion"
  spec.version      = "0.1.0"
  spec.summary      = "飞榜游戏联运"

  spec.description  = <<-DESC

   飞榜游戏联运


DESC



spec.ios.deployment_target = "9.0"
 spec.homepage         = 'https://gitee.com/xiaotengda'
spec.license          = { :type => 'MIT', :file => 'LICENSE' }
spec.source           = { :git => 'https://github.com/Xxxda/FBUnion.git', :tag => spec.version.to_s }


spec.author       = { "xiaotengda" => "xiaotengda9@163.com" }
spec.source       = { :path => '.' }
spec.dependency 'AFNetworking'
spec.dependency 'MBProgressHUD'
spec.dependency 'Masonry'
spec.dependency 'YYModel'
spec.dependency 'WHC_ModelSqliteKit', '~> 1.3.0'

spec.resources = 'FBUnionRes.bundle'


spec.requires_arc = true
spec.xcconfig = {"ENABLE_BITCODE" => "No"}

spec.subspec 'Core' do |c|
  
  c.vendored_frameworks = 'FBUnion.framework'
  
end

end
