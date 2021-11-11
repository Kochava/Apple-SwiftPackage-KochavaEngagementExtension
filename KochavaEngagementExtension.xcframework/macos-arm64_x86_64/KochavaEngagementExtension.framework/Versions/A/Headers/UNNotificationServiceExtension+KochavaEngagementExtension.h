//
//  UNNotificationServiceExtension+KochavaEngagementExtension.h
//  KochavaEngagementExtension
//
//  Created by John Bushnell on 5/15/19.
//  Copyright © 2019 - 2021 Kochava, Inc. All rights reserved.
//



#ifndef UNNotificationServiceExtension_KochavaEngagementExtension_h
#define UNNotificationServiceExtension_KochavaEngagementExtension_h



#pragma mark System
#import <UserNotifications/UserNotifications.h>



@interface UNNotificationServiceExtension (KochavaEngagementExtension)



/*!
 @method - kva_didReceiveNotificationRequest:withContent:tokenReplacementDictionary:completionHandler:
 
 @brief Makes changes to the notification as part of Kochava's Engagement support.

 @discussion Call this method to modify the UNNotificationContent object that was delivered with the notification.  At some point during your implementation and following the call to the completionHandler, execute the contentHandler closure and pass it the modified content.
 
 Through this method you can automatically modify various content from the original request.  You might customize the content for the current user or replace it altogether.  You can use this method to automatically download images or movies and add them as attachments to the content.  You may also automatically modify the alert text using token substitution.
 
 This method has a limited amount of time (no more than 30 seconds) to modify the content and execute the completionHandler closure.  If it does not execute that closure in a timely manner, the system calls your extension’s serviceExtensionTimeWillExpire() method to give you one last chance to execute the contentHandler closure.  If you do not, the system presents the notification’s original content to the user.
 
 @param request The original notification request.
 
 @param content The content to be modified.
 
 @param tokenReplacementDictionary An optional dictionary ([String: String]?) which can be used to define token keys with their respective substitution values.  An example token key might be "name", where the associated substitution value might be "Leroy".
 
 @param completionHandler The closure to execute when completed with any asynchronously gathered content.  This closure has no return value and passes the following parameter:
 asynchronousNotificationAttachmentArray
 An array of UNNotificationAttachment(s) which were gathered asynchronously to be appended to the notification content.
 */
- (void)kva_didReceiveNotificationRequest:
    (nonnull UNNotificationRequest *)request
    withContent: (nonnull UNMutableNotificationContent *)content
    tokenReplacementDictionary: (nullable NSDictionary *)tokenReplacementDictionary
    completionHandler: (void (^ _Nonnull)(NSArray<UNNotificationAttachment *> * _Nullable asynchronousNotificationAttachmentArray))completionHandler
    NS_SWIFT_NAME(kva_didReceive(notificationRequest:withContent:tokenReplacementDictionary:completionHandler:))
    API_AVAILABLE(ios(10.0));



@end



#endif



