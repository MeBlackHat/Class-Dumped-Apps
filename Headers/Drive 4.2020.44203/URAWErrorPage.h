//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "URAWPage-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, ReportAbuseOption;

@interface URAWErrorPage : NSObject <URAWPage>
{
    NSDictionary *_stringDict;
    ReportAbuseOption *_option;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) ReportAbuseOption *option; // @synthesize option=_option;
@property(readonly, nonatomic) NSDictionary *stringDict; // @synthesize stringDict=_stringDict;
- (void)tapOkayWithCompletion:(CDUnknownBlockType)arg1;
- (void)tapRow:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *tableData;
- (id)tapClose;
- (void)showInWidget:(id)arg1;
@property(readonly, nonatomic) NSString *headerText;
- (id)initWithStringDict:(id)arg1 option:(id)arg2 error:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

