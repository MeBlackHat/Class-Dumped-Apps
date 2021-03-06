//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBSearchBarAccessory-Protocol.h"

@class DBSearchBarAccessoryButton, NSString;

@interface DBFileEntryCollectionSearchBarAccessory : NSObject <DBSearchBarAccessory>
{
    struct UIEdgeInsets _accessoryViewMargins;
    DBSearchBarAccessoryButton *_accessoryView;
}

+ (id)accessoryWithAccessoryView:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets accessoryViewMargins; // @synthesize accessoryViewMargins=_accessoryViewMargins;
@property(readonly, nonatomic) DBSearchBarAccessoryButton *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void).cxx_destruct;
- (id)initWithAccessoryView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

