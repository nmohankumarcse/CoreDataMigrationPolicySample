//
//  Sample+CoreDataProperties.m
//  CoreDataMigrationPolicty
//
//  Created by Mohankumar on 23/10/17.
//  Copyright © 2017 Mohankumar. All rights reserved.
//
//

#import "Sample+CoreDataProperties.h"

@implementation Sample (CoreDataProperties)

+ (NSFetchRequest<Sample *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"Sample"];
}

@dynamic number;
@dynamic name;

@end
