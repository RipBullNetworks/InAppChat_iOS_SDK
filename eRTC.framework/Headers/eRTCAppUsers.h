//
//  ChatUsersManager.h
//  eRTC
//
//  Created by rakesh  palotra on 13/04/19.
//  Copyright © 2019 Demo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^appUserCompletion)(id json, NSString *errMsg);
typedef void (^appUserFailure)(NSError *error);

@interface eRTCAppUsers : NSObject

+(eRTCAppUsers *)sharedInstance;

/* chat user */
-(void)chatUserListWithParam:(NSDictionary *)dictParam andCompletion:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void)getUserListWithLastUserID:(NSString *)lastUserId andLastCallTime:(NSString *)lastCallTime andUpdateType:(NSString *)updateType andCompletion:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void)getSearchUserListWithKey:(NSString *)strKey andCompletion:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void)getUserDetailsWithAppUserId:(NSString *)userID andCompletion:(appUserCompletion)success andFailure:(appUserFailure) failure;

- (void)fetchUserDetailWithAppUserId:(NSDictionary *)dict andCompletion:(appUserCompletion) success
    andFailure:(appUserFailure) failure;

-(void)loadChatUserList;

-(void)getChatUserList:(appUserCompletion)success;

-(void)syncChatUserListWithUpdateType:(NSString *)updateType;

-(void)ContactblockUnblock:(NSMutableDictionary *)dictParam andCompletion:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void)getContactblockUnblock:(appUserCompletion)success andFailure:(appUserFailure) failure ;

-(void)updateUserProfileData:(NSDictionary *)dictUserProfile andFileData:(NSData *)data andCompletion:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void)logoutUserWithCompletion:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void)getContactAvailibilityandBlockedStatus:(NSArray *)arrayParam andSuccess:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void)connectMQTT;

-(void)updateUserByUserId:(NSString *)notificationType andCompletion:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void) resetNotificationBadgeCount:(appUserCompletion)success andFailure:(appUserFailure) failure;

-(void)deleteUserProfile:(appUserCompletion)success andFailure:(appUserFailure) failure;

- (void)fetchUserDetailByAppUserId:(NSString *)appUserID andCompletion:(appUserCompletion) success
                        andFailure:(appUserFailure) failure;
@end

NS_ASSUME_NONNULL_END
