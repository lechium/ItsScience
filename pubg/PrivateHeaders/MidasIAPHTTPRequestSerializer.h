//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MidasIAPURLRequestSerialization.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface MidasIAPHTTPRequestSerializer : NSObject <MidasIAPURLRequestSerialization>
{
    _Bool _allowsCellularAccess;	// 8 = 0x8
    _Bool _HTTPShouldHandleCookies;	// 9 = 0x9
    _Bool _HTTPShouldUsePipelining;	// 10 = 0xa
    unsigned long long _stringEncoding;	// 16 = 0x10
    unsigned long long _cachePolicy;	// 24 = 0x18
    unsigned long long _networkServiceType;	// 32 = 0x20
    double _timeoutInterval;	// 40 = 0x28
    NSSet *_HTTPMethodsEncodingParametersInURI;	// 48 = 0x30
    NSMutableSet *_mutableObservedChangedKeyPaths;	// 56 = 0x38
    NSMutableDictionary *_mutableHTTPRequestHeaders;	// 64 = 0x40
    unsigned long long _queryStringSerializationStyle;	// 72 = 0x48
    CDUnknownBlockType _queryStringSerialization;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010059be5c
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x000000010059bcac
+ (id)serializer;	// IMP=0x0000000100599a78
@property(copy, nonatomic) CDUnknownBlockType queryStringSerialization; // @synthesize queryStringSerialization=_queryStringSerialization;
@property(nonatomic) unsigned long long queryStringSerializationStyle; // @synthesize queryStringSerializationStyle=_queryStringSerializationStyle;
@property(retain, nonatomic) NSMutableDictionary *mutableHTTPRequestHeaders; // @synthesize mutableHTTPRequestHeaders=_mutableHTTPRequestHeaders;
@property(retain, nonatomic) NSMutableSet *mutableObservedChangedKeyPaths; // @synthesize mutableObservedChangedKeyPaths=_mutableObservedChangedKeyPaths;
@property(retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI; // @synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) unsigned long long networkServiceType; // @synthesize networkServiceType=_networkServiceType;
@property(nonatomic) _Bool HTTPShouldUsePipelining; // @synthesize HTTPShouldUsePipelining=_HTTPShouldUsePipelining;
@property(nonatomic) _Bool HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;	// IMP=0x000000010059c310
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010059c0e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010059bff8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010059be64
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010059bd50
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;	// IMP=0x000000010059b5e0
- (id)requestWithMultipartFormRequest:(id)arg1 writingStreamContentsToFile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010059b004
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 error:(id *)arg4;	// IMP=0x000000010059ad44
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3;	// IMP=0x000000010059acc4
- (void)setQueryStringSerializationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010059acb8
- (void)setQueryStringSerializationWithStyle:(unsigned long long)arg1;	// IMP=0x000000010059ac80
- (void)clearAuthorizationHeader;	// IMP=0x000000010059ac38
- (void)setAuthorizationHeaderFieldWithToken:(id)arg1;	// IMP=0x000000010059abc8
- (void)setAuthorizationHeaderFieldWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x000000010059a908
- (id)valueForHTTPHeaderField:(id)arg1;	// IMP=0x000000010059a884
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;	// IMP=0x000000010059a7f0
@property(readonly, nonatomic) NSDictionary *HTTPRequestHeaders;
- (void)dealloc;	// IMP=0x000000010059a278
- (id)init;	// IMP=0x0000000100599aa0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
