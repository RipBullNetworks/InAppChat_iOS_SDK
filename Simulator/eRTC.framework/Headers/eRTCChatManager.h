//
//  eRTCChatManager.h
//  eRTC
//
//  Created by Rakesh  on 23/02/19.
//  Copyright © 2019 Ripbull Network. All rights reserved.
//




#import <Foundation/Foundation.h>



//typedef void (^CompletionHandler)(id arrUser, NSError *error);

NS_ASSUME_NONNULL_BEGIN

typedef void (^chatApiCompletion)(id json, NSString *errMsg);
typedef void (^chatApiFailure)(NSError *error);

typedef void (^blockApiSuccess)(id json, NSString *errMsg);
typedef void (^blockApiFailure)(NSError *error);

@interface eRTCChatManager : NSObject

+(eRTCChatManager*)sharedChatInstance;

/* generate threadId */

- (void)getChatThreadIDWithParam:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

/* send text Message */
-(void)sendTextMessageWithParam:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

/* send photo item */
-(void)sendPhotoMediaItemWithParam:(NSDictionary *)dictParam andFileData:(NSData *)data andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure)failure;

/* send audio item */
-(void)sendAudioMediaItemWithParam:(NSDictionary *)dictParam andFileData:(NSData *)data andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure)failure;

/* send video item */
-(void)sendVideoMediaItemWithParam:(NSDictionary *)dictParam andFileData:(NSData *)data andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure)failure;

/* send file item */
-(void)sendMediaFileItemWithParam:(NSDictionary *)dictParam andFileData:(NSData *)data andFileExtension:(NSString *) fileExtension andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure)failure;

/* share gif file */
-(void)sendGIFFileWithParam:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)sendTypingStatus:(id)dictData;
-(void)updateMsgStatus:(id)dictData;
-(void)checkUserAvailabilityStatus:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;
-(void)getActiveThreads:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)insertChatMessagesWith:(NSDictionary *)dictMessages;

-(void)updateMessageWithReadStatus:(NSDictionary *)dictMessages;

-(void)CreatePrivateGroup:(NSMutableDictionary *)dictParam withGroupImage:(NSData * _Nullable)ProfilePicData andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;
-(void)CreatePublicGroup:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;
-(void)groupAddParticipants:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;
-(void)groupRemoveParticipants:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)getGroupByGroupId:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;
-(void)getgroupByThreadId:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)getuserGroups:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;


-(void)groupmakeDismissAdmin:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

/* send Location */
-(void)sendLocationMessageWithParam:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)sendContactMessageWithParam:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)updateGroup:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)sendE2ETextMessageWithParam:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;
//-(void)startMessageThread:(NSDictionary*)dictParam andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;
- (void)updateNotificationSettings:(NSString *)notificatoinType withThreadId:(NSString *)threadId  andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)groupUpdateEvent:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)getThreadsNotificationStatus:(NSString *)strThreadId andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)sendTextReactionWithParam:(NSString *)msgId andEmojiCode:(NSString *)emojiCode andEmojiAction:(NSString *)action andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

-(void)sendReactionOnThreadWithParam:(NSDictionary *)dictParam andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

-(void)updateChatReaction:(NSDictionary *)dictData andCompletionHandler:(void (^)(BOOL success)) callback;

-(void)getPendingEvents:(NSMutableDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

- (void)getUserPendingEvents:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure)failure;

- (void)getChatReationUserListWithMsgId:(NSString *)msgId andEmojiCode:(NSString *)emojiCode andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure)failure;

- (void)getThreadReationUserListWithMsgId:(NSString *)msgId andEmojiCode:(NSString *)emojiCode andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure)failure;

-(void)sendReactionOnThreadWithParam:(NSDictionary *)dictParam andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

- (void)getuserInfoWithERTCId:(NSString *)ertcId andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure)failure;

-(void)ForwardMessageWithParam:(NSDictionary *)dictParam andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

-(void)DeleteMessageWithParam:(NSDictionary *)dictParam andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

-(void)editOrDeleteChat:(NSDictionary *)dictData andCompletionHandler:(void (^)(BOOL success)) callback;

-(void)ForwardMultiMessageWithParam:(NSArray *)dictArray andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

-(void)editChat:(NSDictionary *)dictData andCompletionHandler:(void (^)(BOOL success)) callback;

-(void)editMessageWithParam:(NSDictionary *)dictParam andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

-(void)restoreChatHistory:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

-(void)loadPreviousChatHistoryWithThreadID:(NSString*) threadID parameters:(NSDictionary *)dictParam andCompletion:(chatApiCompletion)success andFailure:(chatApiFailure) failure;

+(void) downloadMediaMessage:(NSDictionary*)message andCompletionHandler:(void (^)(NSDictionary * details, NSError *error, NSData *data)) callback;

+(void)getThreadByThreadID:(NSString *)strThreadId andCallBack:(void (^)(id threads, NSError * err))completion;

-(void)searchHistory:(NSString*)searchText completion:(CompletionHandler) callback;

-(void)getHistory:(NSString*)searchText limit:(NSUInteger)limit skip:(NSUInteger)skip isGblobalSearchEnable:(BOOL) isGblobalSearchEnable threadID: (NSString* _Nullable) threadID completion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

-(NSDictionary*)getFeatureConfigs;
@end

NS_ASSUME_NONNULL_END
