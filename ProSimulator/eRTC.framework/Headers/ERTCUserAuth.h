//
//  ERTCUserAuth.h
//  eRTC
//
//  Created by rakesh  palotra on 07/01/21.
//  Copyright © 2021 Demo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//Login Types
typedef NS_ENUM(NSInteger, ERTCUserAuthenticationType) {
    EMAIL,
    MOBILE,
    REGISTER
} ;

@interface ERTCUserAuth : NSObject

@property (strong, nonatomic) NSString *username;
@property (strong, nonatomic) NSString *password;
@property (nonatomic, assign) ERTCUserAuthenticationType type;
@property (strong, nonatomic) NSString *fcmToken;

@property (strong, nonatomic) NSString *currentPassword;
@property (strong, nonatomic) NSString *changePassword;

-(instancetype)initWithLoginUserName:(NSString*) username password:(NSString*)password type:(ERTCUserAuthenticationType) type;
-(instancetype)initWithChangePasswordUserName:(NSString*)username currentPassword:(NSString*)currentPassword newPassword:(NSString*) newPassword type:(ERTCUserAuthenticationType) type;
-(instancetype)initWithForgotUsername:(NSString*)username type:(ERTCUserAuthenticationType) type;
-(NSDictionary*)getDetails;
@end

NS_ASSUME_NONNULL_END
