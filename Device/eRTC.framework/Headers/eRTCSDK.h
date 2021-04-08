//
//  eRTCSDK.h
//  eRTC
//
//  Created by rakesh  palotra on 11/04/19.
//  Copyright © 2019 Demo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ERTCConfig.h"

typedef void (^blockSuccess)(BOOL isValid, NSString *errMsg);
typedef void (^blockFailure)(NSError *error);

NS_ASSUME_NONNULL_BEGIN

@interface eRTCSDK : NSObject

/* valid name space */
//- (instancetype)initWithApiKey:(NSString *) apiKey andBundleId:(NSString *)bundleID;
- (instancetype)initWithApiKey:(NSString *) apiKey;

-(instancetype)initWithConfig:(ERTCConfig*)config withSuccess:(blockSuccess)success andFailure:(blockFailure)failure;


+(void)validateNameSpaceWithWorkSpaceName:(NSString *)workSpaceName withSuccess:(blockSuccess)success andFailure:(blockFailure)failure;

//+(void)didReceiveRemoteNotification:(NSDictionary*)userinfo;
+(void)didReceiveRemoteNotification:(NSDictionary*)userinfo withBundleID:(NSString*)strBundleID;

+(NSDictionary*)decryptMessage:(NSDictionary*) userInfo;
+(void)updateFeatureConfig:(blockSuccess)success andFailure:(blockFailure)failure;

+(void)updatePendingEventInDB:(NSDictionary*)userinfo;
@end

NS_ASSUME_NONNULL_END
