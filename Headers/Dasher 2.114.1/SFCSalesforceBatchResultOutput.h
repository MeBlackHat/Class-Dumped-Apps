//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SFCOutput.h>

@interface SFCSalesforceBatchResultOutput : SFCOutput
{
    unsigned long long _statusCode;
    id _result;
}

@property(readonly, nonatomic) id result; // @synthesize result=_result;
@property(readonly, nonatomic) unsigned long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;

@end

