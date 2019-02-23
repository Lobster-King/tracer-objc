//
//  TRCBlocks.h
//  TraceRecorder
//
//  Created by Ben Guo on 2/22/19.
//  Copyright © 2019 tracer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TRCTraceRecording;

typedef void (^TRCTraceCompletionBlock)(TRCTraceRecording *__nullable trace, NSError *__nullable error);

NS_ASSUME_NONNULL_END

