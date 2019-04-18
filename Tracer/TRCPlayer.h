//
//  TRCPlayer.h
//  Tracer
//
//  Created by Ben Guo on 2/22/19.
//  Copyright © 2019 tracer. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TRCBlocks.h"

@class TRCTrace;

@protocol TRCFixtureProvider;

NS_ASSUME_NONNULL_BEGIN

@interface TRCPlayer : NSObject

/**
 Plays a trace by performing recorded invocations on the main queue.
 Completes with nil if playback completed successfully, or nil if playback
 failed.
 */
- (void)playTrace:(TRCTrace *)trace
         onTarget:(id)target
       completion:(TRCErrorCompletionBlock)completion;

/**
 Plays a trace by performing recorded invocations on the main queue.
 If an unknown object is encountered in the recorded trace, the player asks
 the fixture provider for a fixture.
 Completes with nil if playback completed successfully, or nil if playback
 failed.
 */
- (void)playTrace:(TRCTrace *)trace
         onTarget:(id)target
withFixtureProvider:(id<TRCFixtureProvider>)fixtureProvider
       completion:(TRCErrorCompletionBlock)completion;

@end

NS_ASSUME_NONNULL_END
