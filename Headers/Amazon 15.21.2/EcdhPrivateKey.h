//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EcdhPrivateKey : NSObject
{
    struct ec_key_st *_keyCurve;
    struct bignum_st *_privateKeyValue;
}

@property struct bignum_st *privateKeyValue; // @synthesize privateKeyValue=_privateKeyValue;
@property struct ec_key_st *keyCurve; // @synthesize keyCurve=_keyCurve;
- (id)initWithKey:(struct ec_key_st *)arg1;

@end

