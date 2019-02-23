//
//  TRCTraceRecorder.h
//  TraceRecorder
//
//  Created by Ben Guo on 2/22/19.
//  Copyright © 2019 tracer. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TRCBlocks.h"

NS_ASSUME_NONNULL_BEGIN

@interface TRCTraceRecorder : NSObject

- (void)startRecording:(id)instance;

- (void)stopRecording:(id)instance completion:(TRCTraceCompletionBlock)completion;

@end

NS_ASSUME_NONNULL_END
