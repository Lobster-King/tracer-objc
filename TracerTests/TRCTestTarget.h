//
//  TestSubject.h
//  TracerTests
//
//  Created by Ben Guo on 2/22/19.
//  Copyright © 2019 tracer. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 Not supported
 - non-protocol methods
 - private methods
 - primitive arguments
 - class methods

 steipete/aspects doesn't support hooking class methods.
 possible alternative: https://github.com/Assuner-Lee/Stinger
 */

NS_ASSUME_NONNULL_BEGIN

@interface TRCCustomObject : NSObject
@property (nonatomic, strong) NSString *value;
@end

@protocol TRCTestProtocol <NSObject>
- (void)ret_void__args_none;
- (void)ret_void__args_int:(int)i;
- (void)ret_void__args_uint:(uint)i;
- (void)ret_void__args_float:(float)f;
- (void)ret_void__args_bool:(BOOL)b;
- (void)ret_void__args_string:(NSString *)s;
- (void)ret_void__args_boxed_int:(NSNumber *)n;
- (void)ret_void__args_boxed_uint:(NSNumber *)n;
- (void)ret_void__args_boxed_bool:(NSNumber *)n;
- (void)ret_void__args_boxed_float:(NSNumber *)n;
- (void)ret_void__args_array_single:(NSArray *)a;
- (void)ret_void__args_array_multi:(NSArray *)a;
- (void)ret_void__args_dict_single:(NSDictionary *)d;
- (void)ret_void__args_dict_multi:(NSDictionary *)d;
- (void)ret_void__args_int:(int)i string:(NSString *)s;
- (NSString *)ret_string__args_none;
- (NSString *)ret_string__args_int:(int)i;

// unsupported
- (void)ret_void__args_object:(NSObject *)o;
- (void)ret_void__args_cgsize:(CGSize)s;

// fixture provider
- (void)ret_void__args_custom_object:(TRCCustomObject *)o;
- (void)ret_void__args_custom_object_array:(NSArray<TRCCustomObject *>*)a;

@end

@interface TRCTestTarget : NSObject <TRCTestProtocol>

@end

NS_ASSUME_NONNULL_END
