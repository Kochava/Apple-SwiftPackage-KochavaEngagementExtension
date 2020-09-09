
import XCTest

@testable import KochavaEngagementExtension



final class KochavaEngagementExtensionTests: XCTestCase
{
    
    
    
    func test_register()
    {
        KVALog.shared.level = .trace
        
        print("KochavaCore=\(String(describing: KVACoreProduct.shared.kva_asForContextObject(withContext: .log) as? [AnyHashable: Any]))")
        
        KVAEngagementExtensionProduct.shared.register()
    }

    
    
    static var allTests =
    [
        ("test_register", test_register),
    ]
    
    
    
}



