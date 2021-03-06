//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Apptentive/NSSecureCoding-Protocol.h>

@class ApptentiveClause, NSString;

@interface ApptentiveTarget : NSObject <NSSecureCoding>
{
    NSString *_interactionIdentifier;
    ApptentiveClause *_criteria;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) ApptentiveClause *criteria; // @synthesize criteria=_criteria;
@property(readonly, nonatomic) NSString *interactionIdentifier; // @synthesize interactionIdentifier=_interactionIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

