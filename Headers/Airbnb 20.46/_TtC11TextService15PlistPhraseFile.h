//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP11TextService18WritablePhraseFile_-Protocol.h"

@class NSDate;

@interface _TtC11TextService15PlistPhraseFile : NSObject <_TtP11TextService18WritablePhraseFile_>
{
    // Error parsing type: , name: filePath
    // Error parsing type: , name: fileAccessQueue
}

- (void).cxx_destruct;
- (id)init;
- (void)writeWithStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic, readonly) NSDate *saveDate;
- (id)initWithFilePath:(id)arg1;

@end

