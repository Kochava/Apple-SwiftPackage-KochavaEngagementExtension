//
//  KVAEngagementExtensionProduct.h
//  KochavaEngagementExtension
//
//  Created by John Bushnell on 11/9/17.
//  Copyright © 2017 - 2021 Kochava, Inc.  All rights reserved.
//



#ifndef KVAEngagementExtensionProduct_h
#define KVAEngagementExtensionProduct_h



#pragma mark - IMPORT



#ifdef KOCHAVA_FRAMEWORK
#import <KochavaCore/KochavaCore.h>
#else
#import "KVAProduct.h"
#import "KVASharedPropertyProvider.h"
#endif



#pragma mark - INTERFACE



/*!
 @class KVAEngagementExtensionProduct
 
 @brief A class which defines an engagement product.
 
 @discussion A product in this context generally refers to the result of a build.
 
 Inherits from: KVAProduct
 
 @author John Bushnell
 
 @copyright 2017 - 2021 Kochava, Inc.
 */
@interface KVAEngagementExtensionProduct : KVAProduct <KVASharedPropertyProvider>



#pragma mark - SHARED INSTANCE (SINGLETON)



/*!
 @property shared
 
 @brief The singleton shared instance.
 */
@property (class, readonly, strong, nonnull) KVAEngagementExtensionProduct *shared;



@end



#endif



