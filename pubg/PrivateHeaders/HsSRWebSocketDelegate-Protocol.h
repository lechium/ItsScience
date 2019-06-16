//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsSRWebSocket, NSData, NSError, NSString;

@protocol HsSRWebSocketDelegate <NSObject>

@optional
- (_Bool)webSocketShouldConvertTextFrameToString:(HsSRWebSocket *)arg1;
- (void)webSocket:(HsSRWebSocket *)arg1 HsDidReceivePong:(NSData *)arg2;
- (void)webSocket:(HsSRWebSocket *)arg1 didReceivePingWithData:(NSData *)arg2;
- (void)webSocket:(HsSRWebSocket *)arg1 HsDidCloseWithCode:(long long)arg2 reason:(NSString *)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(HsSRWebSocket *)arg1 HsDidFailWithError:(NSError *)arg2;
- (void)webSocketDidOpen:(HsSRWebSocket *)arg1;
- (void)webSocket:(HsSRWebSocket *)arg1 HsDidReceiveMessageWithData:(NSData *)arg2;
- (void)webSocket:(HsSRWebSocket *)arg1 HsDidReceiveMessageWithString:(NSString *)arg2;
- (void)webSocket:(HsSRWebSocket *)arg1 HsDidReceiveMessage:(id)arg2;
@end
