//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSAutocompletePopulousApplicabilityInternalRequest.h"

@class JavaUtilOptional;

@interface DYNSAutocompleteAutoValue_PopulousApplicabilityInternalRequest : DYNSAutocompletePopulousApplicabilityInternalRequest
{
    JavaUtilOptional *contextGroupId_;
    JavaUtilOptional *contextGroupGuestAccessSettings_;
    JavaUtilOptional *isAccountUserGuestInContextGroup_;
    JavaUtilOptional *contextGroupOrganizationInfo_;
    JavaUtilOptional *dasherAccountUserCapabilities_;
    JavaUtilOptional *newGroupType_;
    JavaUtilOptional *newGroupGuestAccessEnabled_;
    _Bool isAsynchronousRequest_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)getIsAsynchronousRequest;
- (id)getNewGroupGuestAccessEnabled;
- (id)getNewGroupType;
- (id)getDasherAccountUserCapabilities;
- (id)getContextGroupOrganizationInfo;
- (id)getIsAccountUserGuestInContextGroup;
- (id)getContextGroupGuestAccessSettings;
- (id)getContextGroupId;

@end

