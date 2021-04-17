//
//  eRTCCoreDataManager.h
//  testSDK
//
//  Created by Ashish Vani on 08/04/19.
//  Copyright © 2019 All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

typedef void (^CompletionHandler)(id ary, NSError *err);

NS_ASSUME_NONNULL_BEGIN

@interface eRTCCoreDataManager : NSObject

+(eRTCCoreDataManager *)sharedInstance;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (NSData *)convertObjectIntoDataWith:(id)obj;

- (id)convertDataIntoObjectWith:(NSData *)data;

/* Logged In User Details */
-(void)getLoggedInUserInfo:(void (^)(id userInfo))completion;

/* User table operations */

- (void)insertRecordInUserTableWithUserData:(NSArray *)aryUser;

- (void)fetchChatUserListWithCompletionHandler:(CompletionHandler)callBack;

/* Group table operation*/

- (void)insertRecordInGroupTableWithGroupListData:(NSArray *)aryGroup;

+ (void)fetchGroupWithGroupId:(NSString *)groupID andCompletionHandler:(CompletionHandler) callback;

+ (void)fetchGroupRecordWithCompletionHandler:(CompletionHandler) callback;

- (void)fetchGroup:(NSString *)groupID andCompletionHandler:(CompletionHandler) callBack;

- (void)updateGroupInformationWithGroupID:(NSDictionary *)groupDict;

/* Chat table operations */

- (void)getUserChatHistoryWithThreadID:(NSString *) threadId andCompletionHandler:(CompletionHandler)callBack;

- (void)getUserReplyThreadChatHistoryWithThreadID:(NSString *)threadId andCompletionHandler:(CompletionHandler)callBack;

/* mark favourite */
- (void)isMarkFavouriteWithMessageUniqueId:(NSString *)msqUniqueId andMarkFavourite:(BOOL) isfavourite andCompletionHandler:(void (^)(BOOL isMarkFavourite)) callback faliure:(void (^)(NSError * error)) failureCallBack;

- (void)updateBlockedInUserTable:(NSArray *)aryUser;

- (void)updateUnBlockedInUserTable:(NSArray *)aryUser;

- (void)updateUserAvailabilityAndBlockedStatusInUserTable:(NSArray *)aryUser;

/* ThreadChat table operations */
- (void)getUserReplyThreadChatHistoryWithThreadID:(NSString *)threadId withParentID:(NSString*)strParentId andCompletionHandler:(CompletionHandler)callBack;

-(NSDictionary*)getMessageByUniqueID:(NSString*)msgUniqueID;

-(NSDictionary*)getThreadMessageByUniqueID:(NSString*)msgUniqueID;

@end

NS_ASSUME_NONNULL_END
