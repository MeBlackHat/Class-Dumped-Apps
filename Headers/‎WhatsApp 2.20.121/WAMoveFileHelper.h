//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface WAMoveFileHelper : NSObject
{
    NSString *_fromPath;
    NSString *_toPath;
    NSFileManager *_fileManager;
    _Bool _isSqliteDatabase;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSqliteDatabase; // @synthesize isSqliteDatabase=_isSqliteDatabase;
- (void)revert;
- (_Bool)performMove;
- (id)initWithFromPath:(id)arg1 toPath:(id)arg2;

@end

