//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsRequestModel;

@protocol HsTransport <NSObject>
- (void)downloadRequest:(HsRequestModel *)arg1 withCompletionBlock:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
- (void)uploadRequest:(HsRequestModel *)arg1 withCompletionBlock:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
@end
