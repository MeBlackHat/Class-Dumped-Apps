//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface AWSCognitoIdentityProviderIdentityProviderType : AWSModel
{
    NSDictionary *_attributeMapping;
    NSDate *_creationDate;
    NSArray *_idpIdentifiers;
    NSDate *_lastModifiedDate;
    NSDictionary *_providerDetails;
    NSString *_providerName;
    long long _providerType;
    NSString *_userPoolId;
}

+ (id)providerTypeJSONTransformer;
+ (id)lastModifiedDateJSONTransformer;
+ (id)creationDateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *userPoolId; // @synthesize userPoolId=_userPoolId;
@property(nonatomic) long long providerType; // @synthesize providerType=_providerType;
@property(retain, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
@property(retain, nonatomic) NSDictionary *providerDetails; // @synthesize providerDetails=_providerDetails;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(retain, nonatomic) NSArray *idpIdentifiers; // @synthesize idpIdentifiers=_idpIdentifiers;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSDictionary *attributeMapping; // @synthesize attributeMapping=_attributeMapping;

@end

