#include "Entity.h"

Entity::Entity()
{
}

Entity::Entity(float _x, float _y): Position(_x,_y)
{

}

Entity::Entity(Vector2 _Position): Position(_Position)
{

}

Entity::~Entity()
{

}

Vector2 Entity::GetPosition()
{
    return Position;
}

void Entity::SetPosition(Vector2 _Position)
{
   
    
    Position.SetX(_Position.GetX());
    Position.SetY(_Position.GetY());

}
