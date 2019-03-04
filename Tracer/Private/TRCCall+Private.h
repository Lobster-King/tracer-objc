//
//  TRCCall+Private.h
//  Tracer
//
//  Created by Ben Guo on 2/22/19.
//  Copyright © 2019 tracer. All rights reserved.
//

#import "TRCTrace.h"
#import "TRCCall.h"

NS_ASSUME_NONNULL_BEGIN

@interface TRCCall (Private)

/**
 Internal id used to reference the call
 */
- (NSString *)internalId;

@end

NS_ASSUME_NONNULL_END
