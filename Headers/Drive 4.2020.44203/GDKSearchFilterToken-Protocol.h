//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKFileQuery, NSString;
@protocol GDKSearchFilterToken;

@protocol GDKSearchFilterToken <NSObject>
@property(readonly, nonatomic) NSString *searchToken;
- (_Bool)isCompatibleWithToken:(id <GDKSearchFilterToken>)arg1;
- (void)applyToQuery:(GDKFileQuery *)arg1;
@end

