//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ShopByShowItems : NSObject
{
    NSMutableArray *showsArray;
    NSString *currentShowTime;
    NSString *currentShowSourceCode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentShowSourceCode; // @synthesize currentShowSourceCode;
@property(retain, nonatomic) NSString *currentShowTime; // @synthesize currentShowTime;
@property(retain, nonatomic) NSMutableArray *showsArray; // @synthesize showsArray;
- (id)getValidStringDataForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)parseProductListFromDict:(id)arg1;
- (id)initWithShowsList:(id)arg1;

@end

