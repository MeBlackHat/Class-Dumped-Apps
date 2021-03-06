//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSCognitoIdentityProviderCodeDeliveryDetailsType, NSNumber, NSString;

@interface AWSCognitoIdentityProviderSignUpResponse : AWSModel
{
    AWSCognitoIdentityProviderCodeDeliveryDetailsType *_codeDeliveryDetails;
    NSNumber *_userConfirmed;
    NSString *_userSub;
}

+ (id)codeDeliveryDetailsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userSub; // @synthesize userSub=_userSub;
@property(retain, nonatomic) NSNumber *userConfirmed; // @synthesize userConfirmed=_userConfirmed;
@property(retain, nonatomic) AWSCognitoIdentityProviderCodeDeliveryDetailsType *codeDeliveryDetails; // @synthesize codeDeliveryDetails=_codeDeliveryDetails;

@end

