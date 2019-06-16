//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPaymentTransactionObserver.h"

@class NSString;

@interface GADInAppPurchaseTransactionReporter : NSObject <SKPaymentTransactionObserver>
{
    _Bool _reportingEnabled;	// 8 = 0x8
    _Bool _wasDisabled;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x00000001009df5a8
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;	// IMP=0x00000001009e01c8
- (void)reportTransactionsFromArray:(id)arg1 sharedParameters:(id)arg2;	// IMP=0x00000001009dfba0
- (void)reportTransactionsFromArray:(id)arg1;	// IMP=0x00000001009df9b4
- (_Bool)wasDisabled;	// IMP=0x00000001009df9a4
@property(readonly, nonatomic) _Bool shouldBeEnabled;
- (void)disableReporting;	// IMP=0x00000001009df6e8
- (void)enableReporting;	// IMP=0x00000001009df674
- (void)dealloc;	// IMP=0x00000001009df628

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
