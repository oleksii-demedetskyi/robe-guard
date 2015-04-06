//
//  RBGObject.h
//  Robe Guard
//
//  Created by Kostya Bychkov on 4/1/15.
//  Copyright (c) 2015 DAloG ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  Entity representing some data
 */
@interface RBGObject : NSObject

@property (readonly) NSString* title;

+ (instancetype)newObjectWithTitle:(NSString*)title;

- (BOOL)isEqualToObject:(RBGObject*)object;

@end
