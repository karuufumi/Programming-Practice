class Solution:
    def checkStraightLine(self, coordinates: list[list[int]]) -> bool:
        (x0, y0), (x1, y1) = coordinates[:2]
        dx, dy = x1 - x0, y1 - y0
        
        return all((y - y0) * dx == (x - x0) * dy for x, y in coordinates[2:])
