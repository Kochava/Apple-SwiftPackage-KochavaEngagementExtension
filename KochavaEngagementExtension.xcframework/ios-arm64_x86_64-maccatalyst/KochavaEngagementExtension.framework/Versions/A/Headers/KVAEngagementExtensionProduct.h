//
//  KVAEngagementExtensionProduct.h
//  KochavaEngagementExtension
//
//  Created by John Bushnell on 11/9/17.
//  Copyright © 2017 - 2022 Kochava, Inc.  All rights reserved.
//



#ifndef KVAEngagementExtensionProduct_h
#define KVAEngagementExtensionProduct_h



#pragma mark - IMPORT



#pragma mark KochavaCore
@import KochavaCore;



#pragma mark - INTERFACE



/*!
 @class KVAEngagementExtensionProduct
 
 @brief A class which defines an engagement product.
 
 @discussion A product in this context generally refers to the result of a build.
 */
@interface KVAEngagementExtensionProduct : NSObject



#pragma mark - 1️⃣ Getting the Shared Engagement Extension Product



/*!
 @property shared
 
 @brief The singleton shared instance.
 */
@property (class, readonly, strong, nonnull) KVAProduct *shared;



@end



#pragma mark - INTERFACE EXTENSION (KVASharedPropertyProtocol)



@interface KVAEngagementExtensionProduct (KVASharedPropertyProtocol) <KVASharedPropertyProvider>

@end



#endif



