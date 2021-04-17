//
//  eRTCNetworkManager.h
//  eRTC
//
//  Created by rakesh  palotra on 27/11/18.
//  Copyright © 2018 rakesh  palotra. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^blockApiSuccess)(id json, NSString *errMsg);
typedef void (^blockApiFailure)(NSError *error);

//@protocol URLSessionUploadDelegate <NSObject>
//
//- (void)URLSessionUploadProgress:(NSURLSession *)session task:(NSURLSessionTask *)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
//- (void)showProgressWith:(NSString *)strName;
//@end

@interface eRTCNetworkManager : NSObject <NSURLSessionDelegate,NSURLSessionDataDelegate>

//@property (weak, nonatomic) id<URLSessionUploadDelegate> delegateProgress;

+(eRTCNetworkManager *)sharedNetworkInstance;
- (BOOL)validateNameSapceURL:(NSString*)strWorkSpaceURL;
- (NSArray*)getChatUserList;

/* Request for User API with authorization */

- (void)sendRequestWithURL:(NSString *)strURL andMethodType:(NSString *)method andAPIKey:(NSString *)apiKey andApiKeyType:(NSString *)keyType andParameters:(id)parameters andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;


/* Request for chat API with ApiKey */

- (void)sendRequestForTextMessageWithURL:(NSString *)strURL andMethodType:(NSString *)method andAPIKey:(NSString *)apiKey andParameters:(id)parameters andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

-(void)sendMultipartRequestWithURL:(NSString *)strURL andMethodType:(NSString *)method andAPIKey:(NSString *)apiKey andParameters:(id)parameters andFileData:(NSData *)filedata andFileType:(NSString *)type andFileName:(NSString *)fileName andMIMEType:(NSString *) mimeType andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;

/* send offline Messages*/
-(void)sendPendingTextMessage:(blockApiSuccess)success andFailure:(blockApiFailure) failure;


-(void)sendMultipartRequestWithURLForProfileUpdate:(NSString *)strURL andMethodType:(NSString *)method andAPIKey:(NSString *)apiKey andApiKeyType:(NSString *)keyType andParameters:(id)parameters andFileData:(NSData *)filedata andFileType:(NSString *)type andFileName:(NSString *)fileName andMIMEType:(NSString *) mimeType andCompletion:(blockApiSuccess)success andFailure:(blockApiFailure) failure;


@end
