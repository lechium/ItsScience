//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"

@class NSString;

@interface MidasIAPAppStoreDealer : NSObject <SKPaymentTransactionObserver>
{
}

+ (void)deal;	// IMP=0x00000001005dd870
- (_Bool)paymentQueue:(id)arg1 shouldAddStorePayment:(id)arg2 forProduct:(id)arg3;	// IMP=0x00000001005dd868
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;	// IMP=0x00000001005dd864
- (void)dealloc;	// IMP=0x00000001005dd7e8
- (id)init;	// IMP=0x00000001005dd764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
