//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTSpotifyCommand : NSObject
{
    unsigned long long _commandName;
    unsigned long long _commandType;
    NSString *_deviceBrand;
    NSString *_deviceModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, nonatomic) NSString *deviceBrand; // @synthesize deviceBrand=_deviceBrand;
@property(readonly, nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
@property(readonly, nonatomic) unsigned long long commandName; // @synthesize commandName=_commandName;
- (id)initWithCommandName:(unsigned long long)arg1 commandType:(unsigned long long)arg2 deviceBrand:(id)arg3 deviceModel:(id)arg4;

@end

