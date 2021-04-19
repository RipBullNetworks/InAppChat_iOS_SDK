//
//  ERTCConfig.h
//  eRTC
//
//  Created by rakesh  palotra on 06/01/21.
//  Copyright © 2021 Demo. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef enum {
       QA=1,
       Staging,
       Production
   } ENVIRONMENT;

@interface ERTCConfig : NSObject
@property (strong, nonatomic) NSString *nameSpace;
@property (strong, nonatomic) NSString *apiKey;
@property (assign, nonatomic) ENVIRONMENT environment;

@end

