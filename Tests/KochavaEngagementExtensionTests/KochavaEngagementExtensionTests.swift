
import XCTest

@testable import KochavaEngagementExtension



final class KochavaEngagementExtensionTests: XCTestCase
{
    
    
    
    func test_register()
    {
        KVALog.shared.level = .trace
        
        KVAEngagementExtensionProduct.shared.register()
    }

    
    
    static var allTests =
    [
        ("test_register", test_register),
    ]
    
    
    
}



